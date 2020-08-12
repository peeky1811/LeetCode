class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        s=set()
        for email in emails:
            local, domain=email.split('@')
            # print(local, domain)
            if '+' in local:
                local=local.split('+') # or local = local[:local.index('+')]
                local=local[0]
            if '.' in local:
                local=local.split('.')
                local=''.join(local)
            # print(local)
            s.add(local+'@'+domain) # or s.add(local.replace('.','')+'@'+domain)
            # print(s)
        return len(s)

class Solution:
    def distMoney(self, money: int, children: int) -> int:
        if money < children:
            return -1

        money = money - children
        #see how many time money can be distributed
        eight_children = int(money / 7)
        #money_remaining = money % eight_children
        money_remaining = money - (7 * eight_children)

        print(f"eight_children {eight_children} \n money_remaining {money_remaining}")
        
        if eight_children < children:
            if money_remaining == 3 and (children - eight_children == 1) :
                return eight_children - 1 
            return eight_children

        if eight_children == children:
            if money_remaining != 0:
                return eight_children - 1
            return eight_children

        if eight_children > children:
            return children - 1
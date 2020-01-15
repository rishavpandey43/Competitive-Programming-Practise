import copy


def check_max_discount(amount_index, total_amount):
    temp_total_amount = copy.deepcopy(total_amount)
    temp_total_amount.pop(amount_index)
    return "".join(str(amount) for amount in temp_total_amount)


def discount_calc(total_amount):
    discounted_price = int(check_max_discount(0, total_amount))
    for index, amount in enumerate(total_amount):
        new_discounted_price = check_max_discount(index, total_amount)
        if discounted_price > int(new_discounted_price):
            discounted_price = int(new_discounted_price)
    return discounted_price


amount_count = int(input())

for amount in range(0, amount_count):
    total_amount = list(map(int, input()))
    print(discount_calc(total_amount))

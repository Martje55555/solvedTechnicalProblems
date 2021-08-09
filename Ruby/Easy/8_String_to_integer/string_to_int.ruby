# Initial Approach

# @param {String} s
# @return {Integer}

def my_atoi(s)
    return -2**31 if s.to_i < -2**31
    return 2**31-1 if s.to_i > 2**31-1
    return s.to_i
end
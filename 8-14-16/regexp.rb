#!/usr/bin/ruby

string = ARGV[0]
result = string.gsub(/[^\d]/, '')

puts result

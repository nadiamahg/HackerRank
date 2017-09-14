import Foundation

let n = Int(readLine()!)!

print(((n % 2 == 0 && ((n >= 2 && n <= 5) || n > 20)) ? "Not Weird" : "Weird"))
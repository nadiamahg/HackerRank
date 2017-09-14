 import Foundation

// number of elements
let n = Int(readLine()!)!

// read array
let arr = readLine()!.components(separatedBy: " ").map{ Int($0)! }

for numbers in arr.reversed(){
    print(numbers, terminator: " ")
}



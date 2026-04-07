# Data Type (Scalar & Non-scalar)

# scalar -> data tunggal (singular)
# Variables
# =, <-, ->, <<-, ->>
a = 7
a <- 7
7 -> a
a

str <- "Budi"
str

# Boolean
temp <- TRUE
print(temp & FALSE)

# String
str <- "Budi"

# Non scalar -> lebih dari 1
# Vector
data <- c(7, 12, 8, 19, 2, 5, 1, 4, 23, 41, 6, 10, 31, 13, 44, 32, 85, 12, 11)

# data <- c(13:20)
data
data[4]

# Table
table(data) # Menampilkan isi vector dan frekuensi dari setiap value


# Matrix
mat <- matrix(1:9, nrow=3, ncol=3)
mat
x <- 2
y <- 3
mat[x,y] # Mengambil 1 value di matrix
mat[c(1,2), c(2,3)] # Mengambil area matrix

# Factor
names <- c("Anthony", "Benedictus", "Collin", "Daphne", "Anthony")

factored <- factor(names)
factored

# ==============
# Functions
add <- function(a, b){
  result <- a + b
  return(result)
}

add(2, 6)

# Bisa tanpa return
addWithOne <- function(a, b=1) {
  a + b
}

addWithOne(4)
addWithOne(4, 3)

# Importing Data

data = read.csv("data.csv", sep = ";")
getwd() # Ambil directory
data


# =====================
# Command: Ctrl + Shift + C
# Run: Ctrl + enter
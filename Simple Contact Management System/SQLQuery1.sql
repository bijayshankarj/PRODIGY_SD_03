CREATE TABLE [dbo].[Contactinfo]
(
	[number] NVARCHAR(50) NOT NULL PRIMARY KEY, 
    [fname] NVARCHAR(50) NULL, 
    [email] NVARCHAR(50) NULL, 
    [address] NVARCHAR(100) NULL
)
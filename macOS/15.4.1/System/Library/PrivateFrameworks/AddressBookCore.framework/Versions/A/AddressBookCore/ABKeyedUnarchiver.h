@class ABAddressBook;

@interface ABKeyedUnarchiver : NSKeyedUnarchiver

@property (readonly, nonatomic) ABAddressBook *addressBook;

+ (id)unarchiveObjectWithData:(id)a0 addressBook:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initForReadingWithData:(id)a0 addressBook:(id)a1 error:(id *)a2;

@end

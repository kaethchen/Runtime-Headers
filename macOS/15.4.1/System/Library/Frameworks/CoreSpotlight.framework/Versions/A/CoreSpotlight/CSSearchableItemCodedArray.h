@class NSString, CSDecoder;

@interface CSSearchableItemCodedArray : NSArray

@property (readonly, nonatomic) struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) CSDecoder *items;
@property (readonly, nonatomic) CSDecoder *itemsContent;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithItems:(id)a0;
- (id)initWithItems:(id)a0 itemsContent:(id)a1;

@end

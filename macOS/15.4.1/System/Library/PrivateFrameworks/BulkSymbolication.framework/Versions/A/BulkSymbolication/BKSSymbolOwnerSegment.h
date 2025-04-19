@class BKSSymbolOwner, NSString, NSNumber;

@interface BKSSymbolOwnerSegment : NSObject

@property (readonly, weak, nonatomic) BKSSymbolOwner *symbolOwner;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long offsetFromSymbolOwnerStart;
@property (readonly, nonatomic) unsigned long long defaultLoadAddress;
@property (readonly, nonatomic) NSNumber *size;

+ (id)sortedSegmentsFromSegmentDict:(id)a0 symbolOwner:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithSegmentName:(id)a0 offsetIntoSymbolOwner:(unsigned long long)a1 defaultSegmentLoadAddress:(unsigned long long)a2 segmentSize:(id)a3 symbolOwner:(id)a4;

@end

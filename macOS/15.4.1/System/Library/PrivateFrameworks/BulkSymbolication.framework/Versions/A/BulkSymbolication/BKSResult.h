@class NSUUID, BKSSymbolOwner, BKSRequest, NSString, NSNumber, BKSSymbolOwnerSegment;

@interface BKSResult : NSObject

@property (readonly, nonatomic) BKSRequest *request;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) BKSSymbolOwner *symbolOwner;
@property (readonly, nonatomic) BOOL isTextExecOffset;
@property (readonly, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) BKSSymbolOwnerSegment *segment;
@property (readonly, nonatomic) NSNumber *offsetIntoSegment;
@property (readonly, nonatomic) NSNumber *offsetIntoSymbolOwner;
@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) NSNumber *symbolLength;
@property (readonly, nonatomic) NSNumber *sourceLine;
@property (readonly, nonatomic) NSNumber *sourceColumn;
@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly, nonatomic) NSNumber *offsetIntoSymbol;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 request:(id)a1 symbolOwner:(id)a2;

@end

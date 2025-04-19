@class NSUUID, NSNumber, NSString;

@interface BKSRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) BOOL isTextExecOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_offsetFromMachHeaderWithSymbolOwner:(id)a0;
- (id)initWithSymbolOwnerUUID:(id)a0 offsetIntoSymbolOwner:(unsigned long long)a1;
- (id)initWithSymbolOwnerUUID:(id)a0 segmentName:(id)a1 offsetIntoSegment:(unsigned long long)a2;
- (id)initWithUUID:(id)a0 offset:(unsigned long long)a1 isTextExecSegment:(BOOL)a2;
- (id)offsetIntoSymbolOwner:(id)a0;

@end

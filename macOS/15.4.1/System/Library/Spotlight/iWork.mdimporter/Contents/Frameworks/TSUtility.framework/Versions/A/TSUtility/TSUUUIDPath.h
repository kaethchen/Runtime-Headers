@class NSArray, NSUUID, NSString;

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>

@property (readonly, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSUUID *lastUUID;
@property (readonly, nonatomic) NSString *UUIDPathString;

+ (id)lastUUIDFromUUIDPathString:(id)a0;
+ (id)tokenizeUUIDPathString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithArray:(id)a0;
- (id)UUIDPathByAppendingUUID:(id)a0;
- (id)initWithUUIDPathString:(id)a0;

@end

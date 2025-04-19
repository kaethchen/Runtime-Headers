@class NSUUID, NSDate;

@interface ICTTTextEdit : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSUUID *replicaID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)descriptionWithNote:(id)a0;
- (id)initWithTimestamp:(id)a0 replicaID:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end

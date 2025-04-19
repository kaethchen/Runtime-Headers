@class NSArray, NSString, NSDate;

@interface ICTTTextEditGroup : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSArray *edits;
@property (readonly, copy, nonatomic) NSDate *latestTimestamp;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEdits:(id)a0 latestTimestamp:(id)a1 userID:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end

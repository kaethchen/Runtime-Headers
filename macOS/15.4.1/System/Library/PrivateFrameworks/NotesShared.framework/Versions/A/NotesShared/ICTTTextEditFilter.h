@class NSSet, NSDate;

@interface ICTTTextEditFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *allowedUserIDs;
@property (copy, nonatomic) NSSet *allowedAttachmentIDs;
@property (nonatomic) BOOL allowsMissingTimestamps;
@property (nonatomic) BOOL allowsMissingUsers;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSDate *toDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

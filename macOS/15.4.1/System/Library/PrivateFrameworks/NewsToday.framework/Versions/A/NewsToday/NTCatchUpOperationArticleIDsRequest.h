@class NSOrderedSet, NSDictionary, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying, NSSecureCoding> *identifier;
@property (copy, nonatomic) NSOrderedSet *articleIDs;
@property (copy, nonatomic) NSDictionary *overrideHeadlineMetadataByArticleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithArticleIDs:(id)a0 overrideHeadlineMetadataByArticleID:(id)a1;

@end

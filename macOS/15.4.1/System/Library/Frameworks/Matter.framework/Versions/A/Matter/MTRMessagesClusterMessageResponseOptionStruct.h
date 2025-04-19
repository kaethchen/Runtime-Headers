@class NSNumber, NSString;

@interface MTRMessagesClusterMessageResponseOptionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *messageResponseID;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

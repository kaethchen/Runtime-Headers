@class MTROperationalStateClusterErrorStateStruct;

@interface MTROperationalStateClusterOperationalErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTROperationalStateClusterErrorStateStruct *errorState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

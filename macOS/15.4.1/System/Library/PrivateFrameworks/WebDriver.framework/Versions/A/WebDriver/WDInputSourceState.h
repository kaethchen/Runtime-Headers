@class NSString, NSSet, NSNumber, WDRemoteElement;

@interface WDInputSourceState : NSObject <NSCopying>

@property (copy, nonatomic) NSString *sourceId;
@property (copy, nonatomic) NSSet *virtualKeys;
@property (copy, nonatomic) NSString *charKey;
@property (retain, nonatomic) NSNumber *mouseButton;
@property (nonatomic) long long mouseInteraction;
@property (retain, nonatomic) NSNumber *locationX;
@property (retain, nonatomic) NSNumber *locationY;
@property (nonatomic) long long locationOriginType;
@property (copy, nonatomic) WDRemoteElement *locationOriginElement;
@property (retain, nonatomic) NSNumber *deltaX;
@property (retain, nonatomic) NSNumber *deltaY;
@property (retain, nonatomic) NSNumber *duration;

+ (id)initialState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceId:(id)a0;
- (BOOL)isEqualToInputSourceState:(id)a0;

@end

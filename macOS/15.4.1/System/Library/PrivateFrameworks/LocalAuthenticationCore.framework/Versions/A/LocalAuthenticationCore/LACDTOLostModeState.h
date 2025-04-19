@class NSDate;

@interface LACDTOLostModeState : NSObject

@property (readonly, nonatomic) BOOL isInLostMode;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) BOOL confirmed;

+ (id)nullInstance;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid:(id)a0;
- (id)initWithIsInLostMode:(BOOL)a0 confirmed:(BOOL)a1;
- (id)initWithIsInLostMode:(BOOL)a0;
- (id)initWithIsInLostMode:(BOOL)a0 confirmed:(BOOL)a1 createdAt:(id)a2;

@end

@interface CSVTUITrainingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sessionId;
@property (readonly, nonatomic) int sessionStatus;
@property (readonly, nonatomic) int audioStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionId:(long long)a0 sessionStatus:(int)a1 audioStatus:(int)a2;

@end

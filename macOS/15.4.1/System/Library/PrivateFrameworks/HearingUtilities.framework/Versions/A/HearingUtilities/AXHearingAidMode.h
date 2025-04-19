@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long category;
@property (nonatomic) unsigned char index;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isStream;
- (id)initWithRepresentation:(id)a0;
- (id)transportRepresentation;
- (BOOL)isMixingStream;
- (BOOL)isStreamOrMixingStream;

@end

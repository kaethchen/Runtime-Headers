@class NSString;

@interface CPSystemCoordinatorConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsGroupImmersiveSpace;
    void /* unknown type, empty encoding */ isObservingGroupImmersionStyle;
    void /* unknown type, empty encoding */ faceAppTowardsEachParticipant;
    void /* unknown type, empty encoding */ wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

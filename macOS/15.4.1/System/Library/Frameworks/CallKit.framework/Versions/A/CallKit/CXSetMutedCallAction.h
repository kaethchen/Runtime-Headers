@interface CXSetMutedCallAction : CXCallAction

@property (nonatomic, getter=isBottomUpMute) BOOL bottomUpMute;
@property (nonatomic, getter=isSystemInitiated) BOOL systemInitiated;
@property (nonatomic, getter=isMuted) BOOL muted;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 muted:(BOOL)a1;
- (id)initWithCallUUID:(id)a0 muted:(BOOL)a1 bottomUpMute:(BOOL)a2;
- (id)initWithCallUUID:(id)a0 muted:(BOOL)a1 systemInitiated:(BOOL)a2;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding> {
    NSArray *_allEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL arePointsDeviceRelative;

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x0; double x1; })a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (void)updateForLandscape:(BOOL)a0;

@end

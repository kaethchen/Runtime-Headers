@interface MediaPlaybackCore.MPCMigrationData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ playbackPosition;
    void /* unknown type, empty encoding */ playbackRate;
    void /* unknown type, empty encoding */ currentItemDuration;
    void /* unknown type, empty encoding */ referenceTime;
    void /* unknown type, empty encoding */ delegateInfo;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

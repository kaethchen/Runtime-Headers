@class NSString;

@interface CopresenceCore.PresenceSessionParticipant : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ isCurrentDevice;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface AskToCore.ATResponse : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ responderHandle;
    void /* unknown type, empty encoding */ displayNameContactFormatter;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ originalQuestion;
@property (nonatomic, copy) NSString *responderHandle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chosenAnswer;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

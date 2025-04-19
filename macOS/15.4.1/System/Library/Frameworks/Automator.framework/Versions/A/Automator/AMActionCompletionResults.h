@class NSString, NSNumber;

@interface AMActionCompletionResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) id output;
@property struct _NSRange { unsigned long long location; unsigned long long length; } errorRange;
@property (copy) NSString *errorString;
@property (retain) NSNumber *errorNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

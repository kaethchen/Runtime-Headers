@class NSString, CalVirtualConference;

@interface CalConferenceDeserializationResult : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) CalVirtualConference *conference;
@property (readonly, nonatomic) NSString *blockTitle;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConference:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 blockTitle:(id)a2;

@end

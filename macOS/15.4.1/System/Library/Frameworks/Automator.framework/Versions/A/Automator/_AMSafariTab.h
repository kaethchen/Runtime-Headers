@class NSString, _AMSafariText;

@interface _AMSafariTab : _AMSafariItem

@property (readonly) long long index;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *source;
@property (readonly, copy) _AMSafariText *text;
@property (copy) NSString *URL;
@property (readonly) BOOL visible;

@end

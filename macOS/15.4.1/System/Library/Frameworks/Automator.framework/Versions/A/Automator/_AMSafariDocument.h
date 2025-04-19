@class NSString, _AMSafariText;

@interface _AMSafariDocument : _AMSafariItem

@property (readonly, copy) NSString *source;
@property (readonly, copy) _AMSafariText *text;
@property (copy) NSString *URL;
@property (readonly) BOOL modified;
@property (copy) NSString *name;
@property (copy) NSString *path;

@end

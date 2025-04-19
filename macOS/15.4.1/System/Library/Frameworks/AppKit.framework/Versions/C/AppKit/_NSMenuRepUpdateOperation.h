@class NSMenuItem;

@interface _NSMenuRepUpdateOperation : NSObject

@property (weak) NSMenuItem *menuItem;
@property long long menuIndex;
@property unsigned char operation;

- (void).cxx_destruct;
- (id)initWithMenuIndex:(long long)a0 operation:(unsigned char)a1;

@end

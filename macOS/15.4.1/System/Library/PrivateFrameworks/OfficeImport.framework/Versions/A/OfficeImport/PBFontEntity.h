@class NSString;

@interface PBFontEntity : NSObject {
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (void).cxx_destruct;
- (int)type;
- (id)faceName;
- (int)family;
- (int)charSet;
- (id)initWithName:(id)a0 charSet:(int)a1 type:(int)a2 family:(int)a3;

@end

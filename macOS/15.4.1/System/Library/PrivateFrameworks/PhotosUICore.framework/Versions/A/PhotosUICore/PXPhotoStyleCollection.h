@class NSArray, NSString;

@interface PXPhotoStyleCollection : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ _selectedIndex;
    void /* unknown type, empty encoding */ observable;
}

@property (class, nonatomic, readonly) NSArray *macStyleCollections;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSArray *elements;
@property (nonatomic, readonly) NSString *description;

+ (id)allDefaultStyles;

- (id)init;
- (void).cxx_destruct;

@end

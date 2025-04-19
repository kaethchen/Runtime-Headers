@class CNContact, PHPerson;

@interface PXPeopleNamingItem : NSObject {
    void /* unknown type, empty encoding */ highlightLocation;
    void /* unknown type, empty encoding */ backingObject;
}

@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 searchString:(id)a1;
- (id)initWithPerson:(id)a0 searchString:(id)a1;

@end

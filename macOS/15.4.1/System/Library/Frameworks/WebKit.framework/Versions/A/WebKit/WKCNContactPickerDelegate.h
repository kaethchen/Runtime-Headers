@class NSString;

@interface WKCNContactPickerDelegate : NSObject <CNContactPickerDelegate> {
    struct WeakObjCPtr<id<CNContactPickerDelegate>> { id m_weakReference; } _contactPickerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithContactPickerDelegate:(id)a0;

@end

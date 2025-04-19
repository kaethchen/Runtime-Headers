@class NSString, GCPhysicalInputProfile, NSObject, GCKeyboardInput;
@protocol OS_dispatch_queue;

@interface GCKeyboard : NSObject <GCDevice> {
    unsigned int _creationSequence;
}

@property (class, readonly) GCKeyboard *coalescedKeyboard;

@property (readonly, nonatomic) GCKeyboardInput *keyboardInput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)compareTo:(id)a0;
- (unsigned long long)creationSequence;

@end

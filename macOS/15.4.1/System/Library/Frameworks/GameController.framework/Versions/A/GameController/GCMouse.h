@class GCMouseInput, GCMouseLiveInput, NSString, NSObject, GCPhysicalInputProfile;
@protocol OS_dispatch_queue;

@interface GCMouse : NSObject <GCDevice> {
    unsigned int _creationSequence;
    NSString *_vendorName;
}

@property (class, readonly) GCMouse *current;

@property (readonly, nonatomic) GCMouseLiveInput *liveInput;
@property (readonly, nonatomic) GCMouseInput *mouseInput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mice;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 additionalButtons:(unsigned int)a1;
- (long long)compareTo:(id)a0;
- (unsigned long long)creationSequence;

@end

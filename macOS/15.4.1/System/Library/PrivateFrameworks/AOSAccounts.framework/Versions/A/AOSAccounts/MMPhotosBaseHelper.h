@class NSString, CPSConfigurationClient, NSObject;
@protocol OS_dispatch_queue;

@interface MMPhotosBaseHelper : NSObject <CPSConfigurationChangeObserver> {
    CPSConfigurationClient *_cpsConfigurationClient;
    NSObject<OS_dispatch_queue> *serial_queue_;
    BOOL _cpsConfigurationSucceeded;
    struct PhotosBaseProvider { void /* function */ **x0; struct __CFString *x1; id x2; struct CFString { struct __CFString *x0; } x3; struct CFString { struct __CFString *x0; } x4; struct CFString { struct __CFString *x0; } x5; struct __CFError *x6; BOOL x7; id x8; struct __CFDictionary *x9; id x10; } *_photosBaseProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)cpsConfigClient;
- (void)configurationClient:(id)a0 didChangeStateForServiceIdentifiers:(id)a1;
- (id)cpsStatusInformation;
- (id)initWithServiceProvider:(struct PhotosBaseProvider { void /* function */ **x0; struct __CFString *x1; id x2; struct CFString { struct __CFString *x0; } x3; struct CFString { struct __CFString *x0; } x4; struct CFString { struct __CFString *x0; } x5; struct __CFError *x6; BOOL x7; id x8; struct __CFDictionary *x9; id x10; } *)a0;

@end

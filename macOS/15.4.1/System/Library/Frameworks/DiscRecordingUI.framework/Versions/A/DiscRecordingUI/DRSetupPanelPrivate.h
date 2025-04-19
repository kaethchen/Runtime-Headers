@class NSMutableSet, DRDevice;

@interface DRSetupPanelPrivate : NSObject {
    id _state;
    BOOL _weAskedForTrayOpen;
    NSMutableSet *_internalDisabledItems;
    NSMutableSet *_userDisabledItems;
    id _owner;
    DRDevice *_device;
    long long _reservation;
    id _sheetDelegate;
    SEL _sheetDidEndSelector;
    struct __flags { unsigned char _delegateRespondsToDeviceCouldBeTarget : 1; unsigned char _delegateRespondsToDeviceSelectionChanged : 1; unsigned char _delegateRespondsToShouldHandleMediaReservations : 1; unsigned char _delegateRespondsToMediaIsSuitable : 1; unsigned char _delegateRespondsToDeviceContainsSuitableMedia : 1; unsigned char _delegateRespondsToPropertiesDidChange : 1; unsigned char _delegateRespondsToShouldAllowPropertyModification : 1; unsigned char _delegateRespondsToDetermineSuitable : 1; unsigned int _reserved : 24; } _sp_flags;
}

- (void)dealloc;
- (void)setOwner:(id)a0;
- (id)state;
- (void)setState:(id)a0;
- (id)device;
- (id)owner;
- (void)setDevice:(id)a0;
- (void)setReservation:(long long)a0;
- (long long)reservation;
- (void)setSheetDelegate:(id)a0;
- (id)sheetDelegate;
- (BOOL)delegateRespondsToDetermineSuitable;
- (BOOL)delegateRespondsToDeviceContainsSuitableMedia;
- (BOOL)delegateRespondsToDeviceCouldBeTarget;
- (BOOL)delegateRespondsToDeviceSelectionChanged;
- (BOOL)delegateRespondsToMediaIsSuitable;
- (BOOL)delegateRespondsToPropertiesDidChange;
- (BOOL)delegateRespondsToShouldAllowPropertyModification;
- (BOOL)delegateRespondsToShouldHandleMediaReservations;
- (id)internalDisabledItems;
- (void)setInternalDisabledItems:(id)a0;
- (void)setSheetDidEndSelector:(SEL)a0;
- (void)setUpDelegateSelectors:(id)a0;
- (void)setUserDisabledItems:(id)a0;
- (void)setWeAskedForTrayOpen:(BOOL)a0;
- (SEL)sheetDidEndSelector;
- (id)userDisabledItems;
- (BOOL)weAskedForTrayOpen;

@end

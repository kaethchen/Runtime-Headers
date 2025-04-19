@class NSArray, SHKSharingServicePicker;
@protocol SHKMenuControllerDelegate, NSSharingServicePickerDelegate;

@interface NSSharingServicePickerReserved : NSObject {
    id<NSSharingServicePickerDelegate> delegate;
    id<SHKMenuControllerDelegate> shkDelegate;
    SHKSharingServicePicker *shkPicker;
    NSArray *items;
    long long style;
    unsigned long long collaborationMode;
}

- (id)init;
- (void).cxx_destruct;

@end

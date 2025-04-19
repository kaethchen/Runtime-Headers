@class BuddyPicture;

@interface Presentity : IMHandle {
    BuddyPicture *_customPicture;
    BuddyPicture *_picture;
    BOOL _isCustomPictureChecked;
}

- (void).cxx_destruct;
- (id)picture;
- (void)setPicture:(id)a0;
- (void)sendNotificationABPersonChanged;
- (void)_imPersonPictureChanged:(id)a0;
- (void)customPictureDataChanged:(id)a0 key:(id)a1;
- (void)_setPicture:(id)a0;
- (void)abPersonChangedPicture;
- (id)customPicture;
- (void)forgetCustomPicture;
- (void)setPictureFromImage:(id)a0;

@end

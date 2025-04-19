@class EKUIConferenceURLGadget, NSString, LSApplicationRecord, NSImage, EKVirtualConference, NSURL;

@interface EKUIVirtualConference : NSObject {
    EKVirtualConference *_conference;
    NSURL *_displayurl;
    NSURL *_url;
    LSApplicationRecord *_appRecord;
    EKUIConferenceURLGadget *_gadget;
    BOOL _attemptedToGetAppRecord;
}

@property (readonly) NSString *displayTitle;
@property (readonly) LSApplicationRecord *appRecord;
@property (readonly) NSImage *icon;
@property (readonly) EKVirtualConference *internalEKConference;

- (void).cxx_destruct;
- (id)menu;
- (id)buttonTitle;
- (void)copyLink:(id)a0;
- (void)execute;
- (id)fullURL;
- (id)subTitle;
- (BOOL)needsToPresentConfirmationAlert;
- (id)addLineBreaksToURL:(id)a0;
- (id)initWithEKVirtualConference:(id)a0 forGadget:(id)a1;
- (id)initWithURL:(id)a0 displayURL:(id)a1 forGadget:(id)a2;
- (void)openLink:(id)a0;

@end

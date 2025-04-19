@class NSString;

@interface SiriMessageTypes.AnnounceNotificationHandlingStateUpdatedMessage : SiriMessageTypes.SessionMessageBase {
    void /* unknown type, empty encoding */ announcementState;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

@end

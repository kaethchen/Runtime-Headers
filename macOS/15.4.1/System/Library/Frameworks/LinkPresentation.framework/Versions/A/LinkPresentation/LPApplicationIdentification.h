@interface LPApplicationIdentification : NSObject

+ (BOOL)isMessages;
+ (BOOL)isMessagesOrMessagesViewService;
+ (BOOL)isCNNMobile;
+ (BOOL)isFreeform;
+ (BOOL)isMacNotes;
+ (BOOL)isMessagesViewService;
+ (BOOL)isMobileNotes;
+ (BOOL)isMobileReminders;
+ (BOOL)isNotesPreviewGenerator;

@end

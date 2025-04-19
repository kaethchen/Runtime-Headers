@class NSNumber, NSUUID, NSString;

@interface _WKWebPushAction : NSObject

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSUUID *webClipIdentifier;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) struct optional<WebCore::NotificationData> { union { char __null_state_; struct NotificationData { struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_hasOpaquePath : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } navigateURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } title; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } body; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } iconURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } tag; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } language; unsigned char direction; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } originString; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_hasOpaquePath : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } serviceWorkerRegistrationURL; struct UUID { unsigned __int128 m_data; } notificationID; struct optional<WebCore::ProcessQualified<WTF::UUID>> { union { char __null_state_; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_processIdentifier; } __val_; } ; BOOL __engaged_; } contextIdentifier; struct SessionID { unsigned long long m_identifier; } sourceSession; struct MonotonicTime { double m_value; } creationTime; struct Vector<unsigned char, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { char *m_buffer; unsigned int m_capacity; unsigned int m_size; } data; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } silent; } __val_; } ; BOOL __engaged_; } coreNotificationData;

+ (id)_webPushActionWithNotificationResponse:(id)a0;
+ (id)webPushActionWithDictionary:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_nameForBackgroundTaskAndLogging;
- (unsigned long long)beginBackgroundTaskForHandling;

@end

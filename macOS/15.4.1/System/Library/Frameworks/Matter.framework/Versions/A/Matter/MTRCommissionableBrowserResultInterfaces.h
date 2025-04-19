@interface MTRCommissionableBrowserResultInterfaces : NSObject

@property (nonatomic) struct Optional<chip::Dnssd::CommonResolutionData> { struct ValueHolder { BOOL mHasValue; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int mPlatformInterface; } interfaceId; unsigned long long numIPs; struct IPAddress { unsigned int Addr[4]; } ipAddress[5]; unsigned short port; char hostName[41]; BOOL supportsTcpClient; BOOL supportsTcpServer; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } isICDOperatingAsLIT; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { char __null_state_; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } __val_; } ; BOOL __engaged_; } mrpRetryIntervalIdle; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { char __null_state_; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } __val_; } ; BOOL __engaged_; } mrpRetryIntervalActive; struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> { union { char __null_state_; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short __rep_; } __val_; } ; BOOL __engaged_; } mrpRetryActiveThreshold; } mData; } mValue; } mValueHolder; } resolutionData;

- (id).cxx_construct;

@end

@interface _VZMacOSBootLoaderGuestTraceEvent : _VZGuestTraceEvent {
    struct AvpBreadcrumb { unsigned int status; struct array<unsigned int, 3UL> { unsigned int __elems_[3]; } data; } _breadcrumb;
}

@property (readonly) unsigned int status;
@property (readonly) unsigned int data0;
@property (readonly) unsigned int data1;
@property (readonly) unsigned int data2;

@end

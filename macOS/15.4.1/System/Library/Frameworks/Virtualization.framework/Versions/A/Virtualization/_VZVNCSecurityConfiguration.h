@interface _VZVNCSecurityConfiguration : NSObject <NSCopying> {
    struct variant<Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { struct __impl<Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { union __union<std::__variant_detail::_Trait::_Available, 0UL, Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { char __dummy; struct __alt<0UL, Vnc::SecurityConfiguration::NoSecurity> { struct NoSecurity { } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, Vnc::SecurityConfiguration::VncAuthentication> { char __dummy; struct __alt<1UL, Vnc::SecurityConfiguration::VncAuthentication> { struct VncAuthentication { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } password; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _configuration_type;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_init;

@end

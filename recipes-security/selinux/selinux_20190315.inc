SELINUX_RELEASE = "20190315"

SRC_URI = "https://github.com/SELinuxProject/selinux/releases/download/${SELINUX_RELEASE}/${BPN}-${PV}.tar.gz"

require selinux_common.inc

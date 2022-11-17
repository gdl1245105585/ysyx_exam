deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
